class Node:
  def __init__(self,value=None):
    self.value=value
    self.left=None
    self.right=None
    self.count = 1
    
class Tree:
  def __init__(self):
    self.root=None
  
  def Insert(self,root,value):
    node=Node(value)
    if root is None:
      return node
    else:
      if root.value==value:
        root.count+=1
      elif value<root.value:
        root.left=self.Insert(root.left,value)
      elif value>root.value:
        root.right=self.Insert(root.right,value)
    return root
  
  def Insertwrap(self,data):
    root=Node(data[0])
    print("Root Node assigned ",data[0])
    for value in data[1:]:
      root=self.Insert(root,value)
      print("Inserted Node",value)
    return root

  def Find(self,root,value):
    if root.value==value:
      return True
    else:
      if value<root.value:
        if root.left:
          return self.Find(root.left,value)
        else:
          return False
      else:
        if root.right:
          return self.Find(root.right,value)
        else:
          return False
          
  def PreOrder(self,root,array):
    if root:
      array.append(root.value)
      self.PreOrder(root.left,array)
      self.PreOrder(root.right,array)
    return array        
          
  def InOrder(self,root,array):
    if root:
      self.InOrder(root.left,array)
      array.append(root.value)
      self.InOrder(root.right,array)
    return array
    
  def PostOrder(self,root,array):
    if root:
      self.PostOrder(root.left,array)
      self.PostOrder(root.right,array)
      array.append(root.value)
    return array
      

data=[9,6,16,18,1,4,7]
t=Tree()
print("\n_________ Insertion of Node Through List________________")

root=t.Insertwrap(data)
'''
This Binary Search Tree Is Generated Finally

     9
    / \
   6   16
  / \    \
 1   7    18
  \    
   4   

     _9_
    /   \
  _6_    16_
 /   \        \
 1_   7      18
   \    
    4 
       
'''


print("\n___________ Different Tree Traversal_____________________")

print("\nPre Order Traversal")
result=[]
t.PreOrder(root,result)
print(result)

print("\nIn Order Traversal (Sorted)")
result=[]
t.InOrder(root,result)
print(result)

print("\nPost Order Traversal")
result=[]
t.PostOrder(root,result)
print(result)



print("\n___________ Search Element In Tree _____________________")

print("\nIs 4 Present in tree ")
ispresent=t.Find(root,4)
print(ispresent)

print("\nIs 5 Present in tree ")
ispresent=t.Find(root,5)
print(ispresent)
