item = input("what order do u wanna place ?(idli , dosa , tea) \n")
qty = int(input("how many items?\n"))
def get_price(item):
    if item == "idli":
        return 30
    elif item == "dosa":
        return 50
    elif item == "tea":
        return 20
    else:
        print("choose item from the menu")


def item_cost(item, qty):
    # TODO: call get_price() and return the cost
    cost = get_price(item) * qty
    return cost


def calculate_gst(cost, rate=0.05):
    # TODO: return the GST rounded to 2 decimals
    gst=cost * rate
    return gst




def generate_bill(subtotal, discount_percent=0):
    discount = subtotal * discount_percent
    amount_after_discount = subtotal - discount
    gst = call calculate_gst(amount_after_discount)
    total = amount_after_discount + gst
    return discount, gst , total


def split_bill(total, people):
    each_pays = total / pepole
    left_over = total - each_pays
    return each_pays , left_over
    


# ---------------- Main program ----------------
# A group of 3 friends orders 2 dosa and 3 coffee, with a 10% coupon.

subtotal = item_cost('dosa',2) + item_cost('coffee',3)
discount1 = gst, total = generate_bill(subtotal1,0.02) 
subtotal2 = item_cost("coffee",3)
discount2 = gst2 , total2 = generate_bill(subtotal2,0.02)

each, extra = split_bill(total+total2,3)

print("Subtotal :", subtotal)
print("Discount :", discount)
print("GST      :", gst)
print("Total    :", total)
print("Each pays:", each, "| Left over:", extra)

