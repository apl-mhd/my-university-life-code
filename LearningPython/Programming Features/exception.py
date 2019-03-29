def div(x,y):

    try:
        result =  x / y


    except ZeroDivisionError as e:
        print('Cannot division by zero',e)
        return None

    except:
        print('input error')
        return  None

    return result


#division with else block

def div2(x,y):

    try:
        result = x/y

    except ZeroDivisionError as e:
        print('Error:',e)

    else:
        print('result = ',result)


print('finaly block start')

# Finally block


def div3(x,y):
    try:
        result = x/y

    except ZeroDivisionError:
        print('division by zero error ')

    else:
        print(result)

    finally:
        print('exception occur or not')



div3(3,2)
div3(4,0)