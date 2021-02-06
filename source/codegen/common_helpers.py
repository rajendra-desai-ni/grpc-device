def driver_name_to_pascal(driver_name):
  driver_name = list(driver_name.lower())
  index = 0
  driver_name[index] = driver_name[index].upper();
  for x in driver_name :
      if x == '-' :
          driver_name[index + 1] = driver_name[index + 1].upper();
          del driver_name[index]
         
      index = index + 1
  return ("".join(driver_name))
  
def driver_name_add_underscore(driver_name):
  driver_name = list(driver_name)
  index = 0
  for x in driver_name :
      if x == '-' :
          driver_name[index] = "_";
         
      index = index + 1
  return ("".join(driver_name))


def is_output_parameter(parameter):
    if "out" in parameter["direction"]:
      return True
    return False

def is_input_parameter(parameter):
    if "in" in parameter["direction"]:
        return True
    return False

def is_array(dataType):
  if dataType.find("[]") != -1:
    return True
  return False
  
def camel_to_snake(camelString):
  camelString = list(camelString)
  index = 0
  for x in camelString :
      if x.isupper():
          camelString[index] = camelString[index].lower();
          camelString.insert(index, "_")
          
      index = index + 1
  return ("".join(camelString))

def snake_to_camel(snake_string):
  snake_string = list(snake_string)
  index = 0
  snake_string[index] = snake_string[index].upper();
  for x in snake_string :
      if x == '_':
          snake_string[index + 1] = snake_string[index + 1].upper();
          del snake_string[index]         
      index = index + 1
  return ("".join(snake_string))

def pascal_to_camel(pascal_string) :
  pascal_string = list(pascal_string)
  pascal_string[0] = pascal_string[0].lower();
  return ("".join(pascal_string))
  