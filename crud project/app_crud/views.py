from django.shortcuts import render
from app_crud.models import *
# Create your views here.
def index(request):
    all_data=user.objects.all()
    return render(request,"main.html",{"all_data":all_data})

def add_data(request):
    user.objects.create(
        firtsname=request.POST["fname"],
        lastname=request.POST["lname"],
        mobile=request.POST["mobile"],
    )
    all_data=user.objects.all()
    return render(request,"main.html",{"msg":"Data Inserted Suceesfully","all_data":all_data})

def update(request,pk):
    one_data=user.objects.get(id=pk)
    return render(request,"update.html",{"one_data":one_data})

def update_data(request,pk):
    one_data=user.objects.get(id=pk)
    one_data.firtsname=request.POST["fname"]
    one_data.lastname=request.POST["lname"]
    one_data.mobile=request.POST["mobile"]
    one_data.save()
    all_data=user.objects.all()
    return render(request,"main.html",{"all_data":all_data})

def delete(request,pk):
    one_data=user.objects.get(id=pk)
    one_data.delete()
    all_data=user.objects.all()
    return render(request,"main.html",{"all_data":all_data})