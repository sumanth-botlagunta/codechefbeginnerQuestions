# A football league of N teams is taking place, where each team plays other teams once in single round robin fashion. A team gets 3 points for winning a game and 0 for losing (assume that no games end in a draw/tie). What is the maximum possible difference of points between the winning team and the second-placed team?

t = int(input());
for i in range(t):
    n = int(input());
    print((n*3)/2);
