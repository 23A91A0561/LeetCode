1# Write your MySQL query statement below
2SELECT s.student_id,s.student_name,su.subject_name,count(e.student_id) AS attended_exams
3FROM Students s
4CROSS JOIN Subjects su
5LEFT JOIN Examinations e
6ON s.student_id=e.student_id AND su.subject_name=e.subject_name
7GROUP BY 1,3
8ORDER BY 1,3