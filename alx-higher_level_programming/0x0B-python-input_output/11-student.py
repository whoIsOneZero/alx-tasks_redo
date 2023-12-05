#!/usr/bin/python3

class Student:
    def __init__(self, first_name, last_name, age):
        self.first_name = first_name
        self.last_name = last_name
        self.age = age
    
    def to_json(self, attrs=None):
        if (type(attrs) == list and all(type(item) == str for item in attrs)):
            return {key: getattr(self, key) for key in attrs if hasattr(self, key)}
        
        return self.__dict__
    
    def reload_from_json(self, json):
        for key, val in json.items():
            setattr(self, key, val)