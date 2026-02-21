# 🎓 Learning Management System (LMS)

A robust, console-based **Learning Management System** developed in C++ using advanced Object-Oriented Programming (OOP) principles. This project simulates a university environment with distinct portals for students and administrators, complete with secure authentication, data persistence, and real-time record management.

---

## 📋 Table of Contents

- [Overview](#overview)
- [System Architecture](#system-architecture)
- [Key Features](#key-features)
- [Technical Stack](#technical-stack)
- [Getting Started](#getting-started)
- [Usage & Access](#usage--access)
- [File Structure](#file-structure)
- [Project Team](#project-team)
- [Contributing](#contributing)

---

## Overview

This Learning Management System is a university-level assignment project designed to demonstrate mastery of C++ and Object-Oriented Programming concepts. The system manages student registrations, course enrollments, grades, and provides secure admin controls for faculty oversight.

### What This Project Does

- **Student Registration & Authentication:** Validates CNIC numbers, generates unique AG numbers, and manages password recovery
- **Multi-Portal Design:** Separate dashboards for students and administrators with role-based access control
- **Academic Management:** Track GPA/CGPA, course enrollments (OOP, Operating Systems, etc.), and grades
- **Feedback System:** Collect anonymous and attributed student reviews about courses and instructors
- **Data Persistence:** All records are saved to disk and loaded on startup—no data is lost between sessions
- **Security:** Multi-key password recovery system for account access

### Why This Project is Useful

This project serves as a practical example of:
- Building real-world applications with C++
- Designing class hierarchies using inheritance
- File I/O and data persistence patterns
- Input validation and error handling
- User interface design for console applications
- Managing complex data with `std::vector`

---

## System Architecture

The system follows a **hierarchical inheritance model** with clear separation of concerns:

```
Data (Parent Class)
├── Manages all file I/O and data initialization
├── Stores all student and admin records in vectors
└── Persists data via constructor/destructor pattern

LMS (Child of Data)
├── Authentication and login logic
├── Account creation and password management
└── Password recovery engine

StudentPortal (Child of LMS)
├── Individual student dashboards
├── Course view and grade tracking
└── Feedback submission interface

AdminPortal (Child of LMS)
├── Student database management
├── Record editing and deletion
├── Feedback review and reporting
└── System oversight and monitoring
```

### Class Responsibilities

| Class | Role |
|-------|------|
| **Data** | Core engine; initializes data from files (constructor) and persists changes (destructor) |
| **LMS** | Handles authentication, registration, login, and password recovery workflows |
| **StudentPortal** | Manages student dashboards, course enrollment views, GPA/CGPA display, and feedback |
| **AdminPortal** | Provides elevated privileges for database management and system administration |

---

## Key Features

### 🎓 Student Portal
- **Smart Registration:** Provide Name and CNIC; the system validates input and auto-generates AG Number and Password
- **Academic Dashboard:** View enrolled courses with real-time GPA and CGPA tracking
- **Password Management:** Change passwords securely or recover access using recovery keys
- **Feedback Submission:** Submit anonymous or attributed reviews for courses and instructors
- **Input Validation:** Strict checks for CNIC format (13 digits), name content (alphabets only), and password strength

### 🛠️ Admin Portal (Teacher Mode)
- **Student Management:** View complete student database with search and filter options
- **Record Editing:** Modify student details (name, AG number, grades, etc.) or remove records entirely
- **Concerning Figures:** Flag and highlight specific student records for administrative follow-up
- **Feedback Review:** Read all course and instructor reviews for quality improvement initiatives
- **Security:** Restricted admin credentials with multi-key password recovery system
- **System Monitoring:** Track system activity and generate basic reports

---

## Technical Stack

| Component | Technology |
|-----------|-----------|
| **Language** | C++17 (standard library features) |
| **Data Storage** | Text files (`.txt`); flat file database |
| **Dynamic Containers** | `std::vector` for efficient memory management |
| **I/O** | File streams (`ifstream`, `ofstream`) for persistence |
| **Validation** | Standard library utilities (`isdigit`, `isalpha`) |
| **Platform** | Cross-platform (tested on Windows/Linux with g++) |

### Key Libraries Used
- `<iostream>` — Console I/O
- `<vector>` — Dynamic arrays for student records
- `<fstream>` — File reading/writing
- `<cctype>` — Character validation (isdigit, isalpha)
- `<random>` — Random number generation for AG numbers
- `<cstdlib>` — Platform utilities (screen clearing)

---

## Getting Started

### Prerequisites

- **C++ Compiler:** GCC, Clang, MSVC, or any C++17-compliant compiler
- **Operating System:** Windows, Linux, or macOS
- **Disk Space:** ~500 KB for source code and data files

### Installation & Setup

1. **Clone the Repository**
   ```bash
   git clone https://github.com/ahmad-maqsood/Learning-Management-System-CPP.git
   cd Learning-Management-System-CPP
   ```

2. **Verify File Structure**
   Ensure the `DATA/` directory exists with all required files:
   ```
   Learning-Management-System-CPP/
   ├── LMS.cpp
   └── DATA/
       ├── adminData.txt
       ├── studentsNames.txt
       ├── studentsAgNums.txt
       ├── studentsCnics.txt
       ├── studentsPasswords.txt
       ├── studentsCGPAs.txt
       ├── studentsGPAs.txt
       └── studentsReviews.txt
   ```

3. **Compile the Program**
   ```bash
   # Using GCC (Linux/macOS)
   g++ -std=c++17 LMS.cpp -o LMS

   # Using Clang
   clang++ -std=c++17 LMS.cpp -o LMS

   # Using MSVC (Windows)
   cl /std:c++latest LMS.cpp
   ```

4. **Run the Program**
   ```bash
   # Linux/macOS
   ./LMS

   # Windows
   LMS.exe
   ```

### First Run

On startup, you'll see the main menu:
```
========================================
   Learning Management System (LMS)
========================================
1. Login
2. Register (New Student)
3. Admin Login
4. Exit
```

---

## Usage & Access

### Admin Account (For Testing)

| Field | Value |
|-------|-------|
| **AG# / Username** | `2021ag2248` |
| **Password** | `CS-409-OOP` |
| **Recovery AG#** | `2021ag2248FP` |
| **Recovery Keys** | `iLoveE1`, `ilovee1`, `ILoveE1`, `ILOVEE1` |

### Testing with Existing Students

**Pre-loaded Student Data:**
- Use the first **7 digits of any CNIC** number as the login username
- Example: CNIC `3650124-1234567` → Login with username `3650124`
- Password is provided in the data files

**Recovery Keys for Testing:**
- `2024ag8790`
- `2024ag9203`
- `2024ag8958`

### Example Workflow

**Register a New Student:**
1. Select "Register (New Student)" from main menu
2. Enter your full name (letters and spaces only)
3. Enter your 13-digit CNIC
4. System auto-generates your AG# and password
5. Login with credentials provided

**Student Dashboard:**
1. Login with your AG# and password
2. View enrolled courses and current GPA
3. Submit feedback or change password

**Admin Management:**
1. Admin login with `2021ag2248` / `CS-409-OOP`
2. View all students, edit records, or remove entries
3. Review collected feedback for quality metrics

---

## File Structure

```
Learning-Management-System-CPP/
│
├── LMS.cpp                          # Main source file (~60KB, single-file architecture)
│
├── DATA/                            # Student and admin data directory
│   ├── adminData.txt                # Admin account information
│   ├── studentsNames.txt            # Student names
│   ├── studentsAgNums.txt           # Auto-generated AG numbers
│   ├── studentsCnics.txt            # Student CNIC numbers
│   ├── studentsPasswords.txt        # Hashed/plain passwords
│   ├── studentsCGPAs.txt            # Cumulative GPA records
│   ├── studentsGPAs.txt             # Semester GPA records
│   └── studentsReviews.txt          # Student feedback and reviews
│
├── PD/                              # Project documentation directory (optional)
│
└── README.md                        # This file
```

### Data Files Format

All data files use simple line-by-line text format, one record per line:
- **Names:** `AHMAD MAQSOOD`
- **AG Numbers:** `2024ag8790`
- **CNICs:** `3650124-1234567`
- **Passwords:** `SecurePass123`
- **Grades:** `3.85`

---

## Project Team

**Course:** CS-409: Object-Oriented Programming (Fall 2025)  
**Section:** BSSE-3rd-E1  
**Instructor:** Sir Saeed Rasheed

**Developers:**
- **Ahmad Maqsood** (2024-AG-8790)
- **Moiz Aftab** (2024-AG-9203)
- **Ahmed Ilyas** (2024-AG-8958)

**Notable Mention:** Admin account (2021ag2248) is dedicated to Sir Saeed Rasheed, our instructor.

---

## Architecture Highlights

### OOP Principles Demonstrated

- **Inheritance:** Four-level class hierarchy (Data → LMS → Student/Admin Portals)
- **Encapsulation:** Data members are protected; access controlled via public methods
- **Abstraction:** Complex file I/O abstraction handled by constructors/destructors
- **Polymorphism:** Overridden methods for specialized portal behavior

### Design Patterns Used

- **Constructor/Destructor Pattern:** Automatic file I/O on object creation/destruction
- **Vector-Based Storage:** Dynamic memory management without manual `new`/`delete`
- **Input Validation Pattern:** Centralized validation functions for consistent checks
- **Menu-Driven Interface:** State machine pattern for user navigation

### Performance Characteristics

- **Data Loading:** O(n) per file read (unavoidable with flat-file structure)
- **Student Lookup:** O(n) linear search (acceptable for university-sized datasets)
- **Memory Usage:** Proportional to number of students (one vector element per record)
- **File I/O:** Synchronous writes ensure no data loss

---

## Troubleshooting

| Issue | Solution |
|-------|----------|
| **"Cannot open file" error** | Verify `DATA/` directory exists in same folder as executable with all required `.txt` files |
| **Compilation fails** | Use C++17 standard: `g++ -std=c++17 LMS.cpp -o LMS` |
| **Data not persisting** | Check file permissions; ensure write access to `DATA/` directory |
| **Screen doesn't clear** | `system("cls")` works on Windows; modify code to `system("clear")` for Linux/macOS |
| **Password recovery loop** | Use provided recovery keys; check `adminData.txt` for recovery AG# format |

---

## Contributing

This is an academic project for educational purposes. For questions or improvements:

1. **Review the Code:** Study `LMS.cpp` to understand the implementation
2. **Suggest Improvements:** Fork and submit pull requests with enhancements
3. **Report Issues:** Use GitHub Issues to report bugs or unclear behavior
4. **Documentation:** Help improve this README or add code comments

### Areas for Future Enhancement

- Separate header files (`.h`) for better code organization
- Database integration (SQLite/MySQL) instead of flat files
- GUI using Qt or other frameworks
- Password hashing and encryption
- User role-based access control (RBAC)
- Course management system (add/remove courses)
- Attendance tracking module
- Email notifications

---

## License

This project is provided as-is for educational purposes at University of Agriculture, Faisalabad. See individual file headers for authorship details.

---

## Support & Resources

- **Questions?** Review the inline comments in `LMS.cpp`
- **Need Help?** Check the [troubleshooting section](#troubleshooting) above
- **Want to Contribute?** See the [contributing guide](#contributing)
- **Found a Bug?** Open an issue on GitHub

---

*Developed with ❤️ by the BSSE-E1 Team during Fall 2025*
