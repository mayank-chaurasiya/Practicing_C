# Student Information Management System in C

This project is a menu-driven C program for managing student information. It allows you to add, search, update, and delete student records, as well as view students by various criteria.

---

## **Features**

- Add new student records (up to 50 students)
- Search for students by roll number or first name
- List students enrolled in a specific course
- Display the total number of students and available slots
- Delete a student record by roll number
- Update student information (name, roll, CGPA, courses)
- Menu-driven interface for easy navigation

---

## **Data Structure**

- Uses a `struct studentInfo` to store:
  - First name
  - Last name
  - Roll number
  - CGPA
  - Array of course IDs

---

## **How It Works**

1. **Menu Loop:**  
   The program displays a menu of tasks and prompts the user to select an option.

2. **Add Student:**  
   Prompts for student details and stores them in the next available slot.

3. **Find by Roll Number:**  
   Searches for a student with the given roll number and displays their details.

4. **Find by First Name:**  
   Searches for students with the given first name and displays their details.

5. **Find by Course:**  
   Lists all students enrolled in a specified course.

6. **Total Students:**  
   Displays the current number of students and remaining capacity.

7. **Delete by Roll Number:**  
   Removes a student record matching the given roll number.

8. **Update Student Info:**  
   Allows updating of any field for a student by roll number.

9. **Exit:**  
   Ends the program.

---

## **Usage**

1. Compile the program:
   ```sh
   gcc studentInfoMgmt.c -o studentInfoMgmt
   ```

2. Run the executable:
   ```sh
   ./studentInfoMgmt
   ```

3. Follow the on-screen menu to manage student records.

---

## **Sample Menu**

```
Tasks you can perform in the system :
 1. Add the Student's Details
 2. Find the Student's details by Roll Number
 3. Find the Student's details by Their First name
 4. Find the students enrolled in the individual courses
 5. Find the Total number of students
 6. Delete the Student's Details through their Roll no.
 7. Update the Student's details by Roll Number
 8. To Exit

Enter your choice to initialize the related task:
```

---

## **Notes & Limitations**

- Maximum of 50 student records can be stored.
- Course IDs are limited to 5 per student.
- Input validation is minimal; invalid input may cause unexpected behavior.
- Some array indexing and loop logic may need review for off-by-one errors.

---

## **License**

This project is for educational purposes.