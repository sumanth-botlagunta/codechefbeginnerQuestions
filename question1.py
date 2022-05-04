#  The test has a total of N question, each question carries 3 marks for a correct answer and −1 for an incorrect answer. Chef is a risk-averse person so he decided to attempt all the questions. It is known that Chef got X questions correct and the rest of them incorrect. For Chef to pass the course he must score at least P marks.

#  Will Chef be able to pass the exam or not?

t = int(input());
for i in range(t):
    (n,x,p) = map(int,input().split());
    if (x*3)-(n-x) >= p:
        print("pass");
    else:
        print("fail");