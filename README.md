# 📘 Algorithms Analysis — Lab (Recurrences & Fibonacci)

👤 **Student:** Andres Basantes  
🏛️ **University:** Yachay Tech  
📚 **Course:** Analysis of Algorithms  
🎓 **Semester:** 6  
👨‍🏫 **Professor:** Israel Pineda  

---

## 🎯 Lab Goals
In this lab we worked on two main topics:

1. **Solve recurrence relations** to find a **closed-form** expression ✅  
2. **Prove the result using mathematical induction** ✅  
3. Implement **Fibonacci** in **C++** using:
   - Iteration 🔁
   - Recursion 🧠

---

## 🧩 Part 1 — Recurrence Relations

### 🔎 What is a recurrence?
A recurrence defines a function using **smaller inputs** of the same function.  
It is very common to model the running time of divide-and-conquer and dynamic programming algorithms.

📌 **General idea:**
- Find a **closed form** (explicit formula without recursion)
- Verify it with **induction**

---

### ✅ Recurrence 1
**T(n) = 3T(n/2) + n**, with **T(1) = 0** (for *n* powers of 2)

🧠 **Theory (short):**
- Convert to **k-form** using *n = 2^k*
- Solve as a linear recurrence in *k*
- Convert back using:  
  **3^k = (2^k)^{log2(3)} = n^{log2(3)}**

✅ **Closed form:**
- **T(n) = 2n^{log2(3)} − 2n**

---

### ✅ Recurrence 2
**T(n) = 3T(n−1) + 4T(n−2)**, with **T(0)=0, T(1)=5**

🧠 **Theory (short):**
- Use the **characteristic equation**
- Solve roots and build the general solution

✅ **Closed form:**
- **T(n) = 4^n − (−1)^n**

---

### ✅ Recurrence 3
**T(n) = 5T(n−1) − 6T(n−2)**, with **T(0)=0, T(1)=1**

🧠 **Theory (short):**
- Also solved with the **characteristic equation**
- Roots lead to exponential terms

✅ **Closed form:**
- **T(n) = 3^n − 2^n**

---

### ✅ Recurrence 4
**x(n) = 2x(n−1) + 4x(n−2)**, with **x(0)=1, x(1)=2**

🧠 **Theory (short):**
- Characteristic equation gives **irrational roots**
- Final answer uses constants A and B from initial conditions

✅ **Closed form (root form):**
- **x(n) = A(1+√5)^n + B(1−√5)^n**

---

## 🧾 Part 2 — Fibonacci in C++ 🧮

### 🧠 Fibonacci definition
- **F(0)=0, F(1)=1**
- **F(n)=F(n−1)+F(n−2)**

---

## 🔁 Fibonacci Iterative (C++)

✅ **Idea:** keep the last two values and update in a loop.  
⏱️ **Time Complexity:** **O(n)**  
💾 **Space Complexity:** **O(1)**

📌 Output prints the first *n* Fibonacci numbers.

---

## 🧠 Fibonacci Recursive (C++)

✅ **Idea:** direct recurrence definition using function calls.  
⏱️ **Time Complexity:** **Exponential (~O(φ^n))**  
💾 **Space Complexity:** **O(n)** due to recursion stack

⚠️ For large *n*, this version becomes very slow.

---

## 🚀 How to Run (quick)
Compile (example):
```bash
g++ main.cpp -o main
./main
```

---

## 📂 Repository Notes
This repository includes:
- ✅ Recurrence solutions (closed-form + induction)
- ✅ Fibonacci iterative and recursive C++ programs
- ✅ PDF files merged for submission 📄

---

### ✅ End of Lab
Thanks for reading! ⭐
