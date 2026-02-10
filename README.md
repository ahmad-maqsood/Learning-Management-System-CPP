# 🎓 Learning Management System (LMS)

A robust, console-based **Learning Management System** developed in C++ using advanced Object-Oriented Programming (OOP) principles. This project simulates a university environment, providing distinct portals for students and administrators with full data persistence.

---

## 👥 Developers & Course Info
* **Presenters:** * Ahmad Maqsood (2024-AG-8790)
    * Moiz Aftab (2024-AG-9203)
    * Ahmed Ilyas (2024-AG-8958)
* **Course:** CS-409: Object-Oriented Programming (Fall 2025)
* **Section:** BSSE-3rd-E1
* **Instructor:** Sir Saeed Rasheed

---

## 🏗️ System Architecture
The project is built on a modular inheritance-based hierarchy to ensure clean code and separation of concerns:



1.  **DATA (Parent Class):** The core engine. It handles all data initialization via constructors (reading from files) and saves data via destructors (writing back to files).
2.  **LMS (Child of DATA):** Handles account creation, login logic, and the password recovery engine.
3.  **Student Portal (Child of LMS):** Manages individual student dashboards, course views, and feedback submissions.
4.  **Admin Portal (Child of LMS):** Grants elevated privileges for record management and system oversight.

---

## ✨ Key Features

### 🛠️ Admin Portal (Teacher Mode)
* **Student Management:** View the complete database of students, edit their details, or remove records.
* **Concerning Figures:** A specialized tool to highlight or flag specific student data for administrative attention.
* **Feedback Review:** Read all course and teacher reviews submitted by students.
* **Security:** Admin credentials are restricted and feature a multi-key recovery system.

### 🎓 Student Portal
* **Smart Registration:** New students provide Name/CNIC; the system validates the format and automatically generates a unique AG Number and Password.
* **Academic Dashboard:** View enrolled courses (OOP, Operating Systems, etc.) and check GPA/CGPA results.
* **Account Security:** Change passwords and use "Recovery Keys" to regain access if a password is forgotten.
* **Feedback System:** Anonymous/Direct review submission for quality improvement.

---

## 💻 Technical Implementation
* **OOP Pillars:** Inheritance, Encapsulation, and abstraction.
* **File Handling:** Reads and updates `.txt` files in real-time to ensure no data is lost between sessions.
* **Dynamic Storage:** Utilizes `std::vector` for efficient memory management of student records.
* **Data Validation:** Logic-based checks for CNIC length, naming conventions, and input types.

---

## 🔑 Access Credentials

### For Testing
| Account Type | Username / AG# | Password |
| :--- | :--- | :--- |
| **Admin** | `2021ag2248` | `CS-409-OOP` |
| **Existing Student** | First 7 digits of CNIC | Provided in data files |

### Recovery Keys
* **Student Keys:** `2024ag8790`, `2024ag9203`, `2024ag8958`
* **Admin Keys:** `iLoveE1`, `ILoveE1`

---

## 📂 File Structure
To run the system correctly, ensure the following file structure is maintained:
* `LMS.cpp` — Main source code.
* `DATA/` — Directory containing:
    * `studentsNames.txt`
    * `studentsAgNums.txt`
    * `studentsPasswords.txt`
    * `reviews.txt`

---

## 🚀 Getting Started
1.  **Clone:** `git clone https://github.com/ahmad-maqsood/Learning-Management-System-CPP.git`
2.  **Compile:** Use any C++ compiler (e.g., `g++ LMS.cpp -o LMS`)
3.  **Run:** Execute the generated file and follow the on-screen instructions.

---
*Developed with ❤️ by the BSSE-E1 Team.*
