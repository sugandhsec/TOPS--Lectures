all_record = {}


def add_student():
    serial = int(input("Enter Serial Number: "))
    first_name = input("Enter First Name: ")
    last_name = input("Enter Last Name : ")
    Contect_number = int(input("Enter Contect Number : "))
    faculty = input("Enter Faculty name: ")
    global all_record
    all_record.update({serial: {'fname': first_name, 'lname': last_name,
                      'Contact': Contect_number, "Faculty": faculty, "subject": {}}})
    for i in range(2):
        subjectname = input("Enter Subjectname: ")
        marks = int(input("Enter Marks: "))
        fees = int(input("Enter Fees"))
        all_record[serial]["subject"].update(
            {subjectname: {"marks": marks, "fees": fees}})
def remove_student():
    pass


def view_all_student():
    print(all_record)


def view_sepcific_student():
    pass
