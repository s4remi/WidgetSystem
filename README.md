# WidgetSystem

A C++ object-oriented programming demo designed for educational purposes. This project illustrates the core principles of OOP using a `Widget` abstract base class and derived classes like `Note` and `Reminder`. It includes hands-on demonstrations of:

- Abstraction via pure virtual methods
- Encapsulation through private data members
- Inheritance with polymorphic behavior
- Composition by embedding objects like `Metadata`
- Manual memory management with raw pointers and destructors

##  What This Project Teaches

- How to implement and use abstract classes
- Why virtual destructors are critical in polymorphic hierarchies
- Proper usage of destructors to avoid memory leaks
- "Has-a" vs "Is-a" relationships in class design
- How composition adds structure and modularity to OOP

## 📁 Project Structure

WidgetSystem/<br>
├── CMakeLists.txt<br>
├── main.cpp<br>
├── Widget.h / .cpp<br>
├── Note.h / .cpp<br>
├── Reminder.h / .cpp<br>
├── Metadata.h / .cpp<br>
├── .gitignore<br>
├── .gitattributes<br>
└── README.md<br>


## ⚙️ How to Build

### Using CLion (Recommended)
Just open the project folder in CLion and hit **Build** or **Run**.

### Using Terminal (CMake + g++)
```bash
mkdir build
cd build
cmake ..
make
./WidgetSystem
