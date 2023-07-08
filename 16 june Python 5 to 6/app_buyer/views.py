import random
from django.shortcuts import render
from .models import *
from django.conf import settings
from django.core.mail import send_mail

# Create your views here.
def index(request):
    return render(request,"index.html")

def register(request):
    if request.method=="POST":
        try:
            user_data=User.objects.get(email=request.POST["email"])
            return render(request,"register.html",{"msg":"User Already Exists"})
        except:
            if request.POST["pwd"]==request.POST["cpwd"]:
                otp=random.randint(100000,999999)
                subject = 'OTP VERIFICATION PROCESS'
                message = f"Thanks For Choosing us Your OTP is {otp}"
                email_from = settings.EMAIL_HOST_USER
                recipient_list = [request.POST["email"], ]
                send_mail( subject, message, email_from, recipient_list )

                # User.objects.create(
                #     name=request.POST["name"],
                #     email=request.POST["email"],
                #     password=request.POST["pwd"],
                # )
                return render(request,"otp.html")
            else:
                return render(request,"register.html",{"msg":"Password And Confirm Password Not match"})
    else:
        return render(request,"register.html")