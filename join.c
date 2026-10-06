CREATE TABLE Student (
    Student_ID INT,
    Name VARCHAR(20),
    Dept_ID INT
);

CREATE TABLE Department (
    Dept_ID INT,
    Dept_Name VARCHAR(20)
);

INSERT INTO Student VALUES (101, 'Ravi', 10);
INSERT INTO Student VALUES (102, 'Priya', 20);
INSERT INTO Student VALUES (103, 'Anu', 10);

INSERT INTO Department VALUES (10, 'MCA');
INSERT INTO Department VALUES (20, 'MBA');

-- INNER JOIN
SELECT Student.Name, Department.Dept_Name
FROM Student
INNER JOIN Department
ON Student.Dept_ID = Department.Dept_ID;

-- LEFT JOIN
SELECT Student.Name, Department.Dept_Name
FROM Student
LEFT JOIN Department
ON Student.Dept_ID = Department.Dept_ID;

-- RIGHT JOIN
SELECT Student.Name, Department.Dept_Name
FROM Student
RIGHT JOIN Department
ON Student.Dept_ID = Department.Dept_ID;
