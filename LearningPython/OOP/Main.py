class Restaurant:
    def details(self):

        print(self.name,self.owner)

    def restaurantWtithAddress(self,address):

        self.details()
        print(address)



ob1 = Restaurant()

ob1.name = "signatureCafe"
ob1.owner ='orko'

ob1.details()
ob1.restaurantWtithAddress("Bogra")





