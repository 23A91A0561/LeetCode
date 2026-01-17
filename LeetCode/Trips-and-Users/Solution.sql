1# Write your MySQL query statement below
2SELECT t.request_at AS Day,ROUND(SUM(CASE WHEN t.status="cancelled_by_driver" OR t.status="cancelled_by_client" THEN 1 ELSE 0 END)/COUNT(*),2) AS "Cancellation Rate"
3FROM Trips t
4JOIN Users u
5ON t.client_id=u.users_id
6JOIN Users u1
7ON t.driver_id=u1.users_id
8WHERE u.banned="No" AND u1.banned="No" AND t.request_at BETWEEN "2013-10-01" AND "2013-10-03"
9GROUP BY t.request_at
10ORDER BY t.request_at