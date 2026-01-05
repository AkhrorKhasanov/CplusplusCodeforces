import os

path = r"D:\Axror\CplusplusCodeforces\800"

files = [f for f in os.listdir(path) if os.path.isfile(os.path.join(path, f))]
print("Fayllar soni:", len(files))
