# 📊 Sorting Visualizer

The **Sorting Visualizer** is a **C++ console-based application** that visually demonstrates the working of various sorting algorithms in real time. It supports popular algorithms like **Bubble Sort, Insertion Sort, Selection Sort, Merge Sort, and Quick Sort**, each implemented in a modular structure for better code clarity and scalability. The program takes user input to select a sorting algorithm and dynamically visualizes the sorting process step-by-step using ASCII art. This project helps users understand how different algorithms operate, comparing their performance and behavior during execution. With a focus on simplicity and efficiency, the Sorting Visualizer is cross-platform and can be compiled using any standard **C++ compiler**. Future improvements could include expanding the algorithm library, integrating a graphical interface using libraries like **SFML** or **SDL**, and adding performance benchmarking for educational and analytical purposes. This project is ideal for students and enthusiasts seeking to deepen their understanding of sorting algorithms through an interactive and visual learning experience.

## 🗂️ Project Structure

```
Sorting Visualizer/
├── bubble_sort.cpp          // Bubble Sort implementation
├── bubble_sort.h            // Bubble Sort header file
├── insertion_sort.cpp       // Insertion Sort implementation
├── insertion_sort.h         // Insertion Sort header file
├── selection_sort.cpp       // Selection Sort implementation
├── selection_sort.h         // Selection Sort header file
├── merge_sort.cpp           // Merge Sort implementation
├── merge_sort.h             // Merge Sort header file
├── quick_sort.cpp           // Quick Sort implementation
├── quick_sort.h             // Quick Sort header file
├── display.cpp              // Visualization and UI functions
├── display.h                // Display header file
├── main.cpp                 // Entry point of the application
├── visualizer.exe           // Compiled executable (Windows)
└── .vscode/tasks.json       // Build automation config (VS Code)
```

## 🔍 Features

- **Multiple Sorting Algorithms**: Visualizes Bubble Sort, Insertion Sort, Selection Sort, Merge Sort, and Quick Sort.
- **Interactive Display**: Uses console-based animations to illustrate array transformations during sorting.
- **Modular Structure**: Each algorithm is implemented in separate files for clarity and easy expansion.
- **Cross-Platform**: Works on any system with a C++ compiler (GCC, MSVC).

## 📌 Code Overview

### 1. main.cpp
- Initializes the sorting visualizer.
- Allows the user to select a sorting algorithm.
- Calls appropriate sorting functions and manages visualization.

### 2. Sorting Algorithms
- Implements standard sorting algorithms (Bubble Sort, Insertion Sort, Selection Sort, Merge Sort, Quick Sort).
- Each algorithm updates the display in real-time during the sorting process.

### 3. display.cpp
- Handles console-based visualization.
- Provides functions to draw the array and show sorting progress.

## 🛠️ How to Run

1. Ensure you have a C++ compiler installed (G++ or MSVC).

2. Compile the code using:

```bash
g++ main.cpp bubble_sort.cpp insertion_sort.cpp selection_sort.cpp merge_sort.cpp quick_sort.cpp display.cpp -o visualizer
```

3. Execute the visualizer:

```bash
./visualizer
```

## 📚 Future Improvements

- Add more sorting algorithms (e.g., Heap Sort, Radix Sort).
- Enhance UI with graphical libraries like **SFML** or **SDL**.
- Implement a performance comparison between algorithms.
