#Program to demonstrate real python string processing to clean and transform
# Output formate:
# ==============================
#  PROFILE CARD
# ==============================
#  Name     : Naveen Kumar
#  Initials : NK
#  Email    : naveen.kumar@company.com
#  Domain   : company.com
#  Phone    : *********3210
#  Valid    : True
# ==============================

raw_data = """
   naveen   KUMAR
naveen.kumar@COMPANY.com
+91-98765-432
NK
"""
print("==============================\n")
print(" PROFILE CARD\n")
print("==============================\n")


name,email,phone,Initials=raw_data.split("\n")[1],raw_data.split("\n")[2],raw_data.split("\n")[3],raw_data.split("\n")[4]
print("#  Name :",name.strip().lower().title().replace("   "," "))
print("# INITIALS :", Initials )
print("#  Email:",email.lower())
print("# Domain:",email.split("@")[1].lower())
print("#  Phone:",phone.replace("-",""))
print("# Valid :", "TRUE" if len(phone)<=14 else "FALSE")

first,last=name.split()[0],name.split()[1]
initials=first[0].upper()+last[0].upper()

























