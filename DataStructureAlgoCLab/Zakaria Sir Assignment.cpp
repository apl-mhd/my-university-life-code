For more info
Argentina 14->team->1
Croatia 13-> tem->2
matchid->23
Performanceid-> 44<->460


http://www.goal.com/en-gb/match/argentina-v-croatia/commentary-result/bwhgq3x658klgh6zg42l2882x
/*Argentina*/
SELECT player_id, player_name, team.team_name FROM player
JOIN team ON player.team_id = team.team_id
WHERE team.team_id = 14;

/*Croatia*/

SELECT player_id, player_name, team.team_name FROM player
JOIN team ON player.team_id = team.team_id
WHERE team.team_id = 13;


****************************