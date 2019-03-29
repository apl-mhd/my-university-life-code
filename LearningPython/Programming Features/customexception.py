class VowelNotAccepted(Exception):

    def __init__(self,message,status):

        super().__init__(message,status)
        self.message = message
        self.status = status




def check_chars(word):
    for char in  word:

        if char.lower() in ['a','e','i','o','u']:
            raise VowelNotAccepted('Vowel not accepted', 101)

    return  word



try:
    print(check_chars('Apel'))

except Exception as e:

    print('Error',e.message)
