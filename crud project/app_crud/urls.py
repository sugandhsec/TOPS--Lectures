from django.urls import path
from app_crud import views

urlpatterns = [
    path('', views.index, name='index'),
    path('add_data/', views.add_data, name='add_data'),
    path('update/<int:pk>', views.update, name='update'),
    path('delete/<int:pk>', views.delete, name='delete'),
    path('update_data/<int:pk>', views.update_data, name='update_data'),
]