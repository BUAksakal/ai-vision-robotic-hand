🤖 AI Vision Controlled Robotic Hand

Bachelor’s Final Thesis Project

A real-time computer vision system that controls a 3D-printed robotic hand using AI-based hand detection and embedded control logic.

This project combines Computer Vision, Embedded Systems, and Real-Time Interaction to demonstrate how AI can directly control physical robotic hardware.

⸻

📌 Project Overview

The goal of this thesis project was to design and implement an intelligent robotic hand capable of interacting with human hand movements in real time.

The system detects hand gestures from camera input and translates them into servo motor commands through Arduino communication. A safety mechanism automatically releases the grip after a defined duration to prevent excessive force and protect the hardware.

This project focuses on bridging perception (AI vision) with physical action (robotic actuation).

⸻

🚀 Key Features
	•	🎥 Real-time hand detection using computer vision
	•	🧠 YOLO / OpenCV-based perception pipeline
	•	🤖 3D-printed robotic hand controlled via Arduino
	•	🔄 Real-time serial communication between Python and hardware
	•	🛡️ Safety logic (automatic release after timeout)
	•	🧩 Custom dataset creation and labeling using Roboflow
  🧱 System Architecture
  Camera Input
      ↓
Computer Vision Pipeline (YOLO / OpenCV)
      ↓
Gesture Interpretation
      ↓
Python Control Logic
      ↓ (Serial Communication)
Arduino Controller
      ↓
Servo Motors → Robotic Hand Movement
