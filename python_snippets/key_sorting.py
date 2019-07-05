list_a = [(19,1),(18,2),(17,3),(16,4),(15,4),(14,6),(13,7),(12,8),(11,9)]

def id_key(x):
   return x[1]

print (list_a)
print (sorted(list_a))
print (sorted(list_a,key=lambda x:x[1]))
print (sorted(list_a,key=id_key))

