import turtle
#set up the turtle
t=turtle.Turtle()
t.shapesize(0.3,0.2)

#set up the screen
s=turtle.Screen()
s.bgcolor("white")

#draw shep with white color
t.fillcolor("red")
t.begin_fill()
t.left(50)
t.forward(235)
t.circle(90,200)
t.left(221)
t.circle(90,200)
t.forward(235)
t.end_fill()

#finish
t.hideturtle()
turtle.done()
