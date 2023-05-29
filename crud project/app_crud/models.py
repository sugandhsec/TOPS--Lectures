from django.db import models

# Create your models here.

class user(models.Model):
    firtsname=models.CharField(max_length=50)
    lastname=models.CharField(max_length=50)
    mobile=models.CharField(max_length=10)

    def __str__(self):
        return self.firtsname+self.mobile

