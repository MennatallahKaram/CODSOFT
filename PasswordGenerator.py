from tkinter import *
import string
import random

length=0
def PasswordGenerator():
    CapitalAlphabets="ABCDEFGHIJKLMNPQRSTUVWXYZ"
    SmallAlphabets=CapitalAlphabets.lower()
    Numbers="0123456789"
    Symbols="/*""''(){}[]&^%$#@!~;,?<>"
    AllCharacters=CapitalAlphabets+SmallAlphabets+Numbers+Symbols
    PasswordLength=int(LengthEntry.get())

    if PasswordLength < 1 or PasswordLength > 30:
        passwordField.delete(0, END)
        passwordField.insert(0, "Sample is too long or negative")
        return

    if complexity.get() == "Weak":
        passwordField.delete(0, END)
        passwordField.insert(0, "".join(random.sample(SmallAlphabets, PasswordLength)))

    if complexity.get() == "Medium":
        passwordField.delete(0, END)
        passwordField.insert(0, "".join(random.sample(SmallAlphabets + CapitalAlphabets, PasswordLength)))

    if complexity.get() == "Hard":
        passwordField.delete(0, END)
        passwordField.insert(0, "".join(random.sample(AllCharacters, PasswordLength)))



task=Tk()
task.title("Password Generator")
task.geometry("340x420")
task.configure(background='#80B280')
GereralFont=('Arial',15,'bold')
complexity = StringVar()

Space = Label(task, text="",bg="#80B280")
Space.grid(pady=10)

PasswordLabel=Label(task, text='Password Generator', font=GereralFont, bg='#004d00', fg='white')
PasswordLabel.grid(pady=10)

complexityLabel = Label(task, text='Complexity Level', font=GereralFont, bg='#004d00', fg='white')
complexityLabel.grid(pady=10)

ComplexityBox = Spinbox(task, values=("Weak", "Medium", "Hard"),textvariable=complexity
                        ,width=15,font=('Arial',15,'bold'))
ComplexityBox.grid(pady=10) 

LengthLabel=Label(task,text='Password Length',font=GereralFont,bg='#004d00',fg='white')
LengthLabel.grid(pady=10)

LengthEntry = Entry(task, width=25, bd=3, font=GereralFont)
LengthEntry.grid()


GenerateButton=Button(task,text='Generate',font=GereralFont,command=PasswordGenerator)
GenerateButton.grid(pady=5)

passwordField=Entry(task,width=30,bd=3,font=GereralFont)
passwordField.grid()


task.mainloop()

