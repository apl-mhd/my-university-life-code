INSERT INTO matches(match_id, match_type, team1_id, team2_id, team1_goal, team2_goal, match_date) VALUES (23, 'Group',14,13,0,3, '2018-06-21' );

INSERT INTO performance(id, match_id, player_id, goals, assists, own_Goal, minutes_played) 
VALUES (441, 23, 371, 1, 0,0, 90);

INSERT INTO performance(id, match_id, player_id, goals, assists, own_Goal, minutes_played) 
VALUES (443, 23, 372, 0, 1,0, 90);

INSERT INTO performance(id, match_id, player_id, goals, assists, own_Goal, minutes_played) 
VALUES (442, 23, 378, 1, 0,0, 90);

INSERT INTO performance(id, match_id, player_id, goals, assists, own_Goal, minutes_played) 
VALUES (444, 23, 368, 1, 0,0, 90);

INSERT INTO performance(id, match_id, player_id, goals, assists, own_Goal, minutes_played) 
VALUES (445, 23, 369, 0, 1,0, 90);



/*
pId= 371, Luka Modric, goal =1, assit 0
pId = 378 Ante Rebic Croatia  goal = 1, assit 0
pID = 368 Ivan Rakitic Croatia   goal=1, assist = 0

pId = 372 Marcelo Brozovic  Croatia  goal =0 , assit 1
pid 369 Mateo Kovacic Croatia  goal =0 , assit 1


SELECT player_id, player_name, team.team_name FROM player
JOIN team ON player.team_id = team.team_id
WHERE team.team_id = 13;
http://www.goal.com/en-gb/match/argentina-v-croatia/commentary-result/bwhgq3x658klgh6zg42l2882x


*/