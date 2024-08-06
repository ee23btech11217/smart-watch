import streamlit as st
import requests

def send_data(data):
    url = "http://192.168.0.107/"  # Replace with your ESP32's IP address
    params = {"data": data}
    try:
        response = requests.get(url, params=params, timeout=5)
        return response.text
    except requests.exceptions.RequestException as e:
        return f"An error occurred: {e}"

st.title("ESP32 Data Sender")

# Text input for user message
user_input = st.text_input("Enter your message:")

# Button to send the message
if st.button("Send"):
    if user_input:
        result = send_data(user_input)
        st.write("Response:", result)
    else:
        st.warning("Please enter a message before sending.")

# Optional: Display the current message being sent
if user_input:
    st.write("Current message:", user_input)