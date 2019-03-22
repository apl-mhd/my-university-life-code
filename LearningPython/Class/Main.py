class Employee:


    def __init__(self, first, last, pay):

        self.first = first
        self.last = last
        self.email = first +'.'+last +'@' + 'mail.com'
        self.pay = pay


    def info(self):

        print('%s %s %s %d' %(self.first, self.last, self.email, self.pay))

    def apply_raise(self):

        self.pay = int(self.pay * 1.5)


class Developer(Employee):
    def __init__(self, first, last, pay, proglang):
        super().__init__(first, last, pay)
        self.proglang = proglang


class Manager(Employee):
    def __init__(self,first,last,pay, employees=None):
        super().__init__(first,last,pay)

        if employees is None:
            self.employees = []
        else:
            self.employees = employees

    def add_emp(self,emp):
        if emp not  in self.employees:
            self.employees.append(emp)

    def remove_emp(self,emp):
        if emp in self.employees:
            self.employees.remove(emp)

    def print_emps(self):

        for emp in self.employees:
            emp.info()









ob = Developer('Apel', 'Mahmud', 9999999,'pYthon')
ob2 = Developer('Orko', 'Orin', 9999999,'pYthon')

mgr = Manager('CMR','sir',9000, [ob])

mgr.add_emp(ob2)



mgr.print_emps()