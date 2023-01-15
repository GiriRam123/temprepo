import numpy as np
import pandas as pd
v=[120,60,30,140,90]
w=[3,7,5,15,9]
ratio=np.divide(v,w)
ratio_sorted=np.flip(np.sort(ratio,kind='Quick'))
indices=np.flip(np.argsort(ratio,kind='quicksort'))
print(indices)
print(ratio_sorted)
dict1=dict({'ratio':ratio_sorted,'Index':indices})
df=pd.DataFrame(dict1)
print(df)
def greedyknapsack(v,w,W):
    ratio=np.divide(v,w)
    index=np.flip(np.argsort(ratio,kind="Quicksort"))
    x=[]
    n=len(v)
    for i in range(0,n):
        x.append(0)
    weight=0
    for i in range(0,n):
        if(W>(weight+w[index[i]])):
            x[index[i]]=1
            weight=weight+w[index[i]]
        else:
            x[index[i]]=(W-weight)/w[index[i]]
            weight=w
            break;
    return np.round(x,2)
x=greedyknapsack(v,w,20)
print(x)
print(np.sum(np.multiply(x,v)))