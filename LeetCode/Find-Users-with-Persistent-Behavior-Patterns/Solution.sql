1# Write your MySQL query statement below
2with cte as(
3SELECT user_id,action_date,action,date_sub(action_date,INTERVAL 
4        ROW_NUMBER() OVER(
5            PARTITION BY user_id, action 
6            ORDER BY action_date
7        ) DAy
8    ) AS rad 
9from activity
10)
11select user_id,action,count(action_date) as streak_length,min(action_date) as start_date,max(action_date) as end_date
12from cte
13group by user_id,action,rad
14having count(action_date)>=5
15order by streak_length desc