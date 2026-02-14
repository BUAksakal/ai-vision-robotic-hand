# 🤖 AI Vision Controlled Robotic Hand
**Bachelor’s Final Thesis Project**

This project presents a real-time computer vision system that controls a 3D-printed robotic hand using AI-based hand detection and embedded control logic. The main objective was to bridge artificial intelligence and physical robotics by translating human hand movements into real robotic actions.

The system captures live video input and processes it using **Python**, **OpenCV**, and **YOLOv8** for real-time hand detection and tracking. To train the detection model, I created a custom dataset by manually capturing and labeling my own images using **Roboflow**, enabling robust recognition across different hand positions and lighting conditions. Detected gestures are interpreted in Python and transmitted to an **Arduino** microcontroller through serial communication, allowing control of the servo motors that drive the robotic hand.

A safety mechanism was implemented to automatically release the grip after a predefined timeout, preventing excessive force and protecting both the hardware and user. The project demonstrates the integration of **Computer Vision**, **Embedded Systems**, and **Human–Machine Interaction** within a practical AI-driven robotics application.

---

## 📸 Project Visuals

### System Overview
![System Architecture](assets/system_architecture.png)

### Hardware Setup
![Hardware Setup](assets/hardware_setup.jpg)

### Real-Time Detection Demo
![Demo](assets/demo.gif)

---

## 🧱 System Workflow
Camera Input
↓
YOLO / OpenCV Detection
↓
Gesture Interpretation (Python)
↓
Serial Communication
↓
Arduino Controller
↓
Servo Motors → Robotic Hand Movement
---

## 🧠 Technologies Used

**Software**
- Python
- OpenCV
- YOLOv8
- Roboflow
- NumPy
- PySerial

**Hardware**
- Arduino
- Servo Motors
- 3D-Printed Robotic Hand
- USB Camera

---

## 🎓 Academic Context

Developed as a **Bachelor’s Final Thesis** in Electrical and Electronics Engineering, focusing on the practical integration of AI perception with real-time robotic control.

---

## 👨‍💻 Author

**Berke Uğur Aksakal**  
AI Engineering Master’s Student  
Deggendorf Institute of Technology
