print("""
Press 1 for Counselor
Press 2 for Faculty
Press 3 for Student
""")
from counsellor import *
def counsellor():
    print("""
    1. Add Student
    2. Remove Student
    3. View All Student
    4. View Specific Student
    """)
    c_choice=int(input("Enter a choice by counsellor: "))
    if c_choice==1:
        add_student()
        counsellor()
    elif c_choice==2:
        remove_student()
        counsellor()
    elif c_choice==3:
        view_all_student()
        counsellor()
    elif c_choice==4:
        view_sepcific_student()
        counsellor()
    else:
        print("Enter Correct Choice")

def faculty():
    pass

def student():
    pass
choice=int(input("Enter Role Id: "))
if choice==1:
    counsellor()
elif choice==2:
    faculty()
elif choice==3:
    student()
else:
    print("Enter Correct Choice")

