def get_price(item):
    if item == "idli":
        return 30
    elif item == "dosa":
        return 50
    elif item == "coffee":
        return 20
    else:
        print("choose item from the menu")
        return 0


def item_cost(item, qty):
    return get_price(item) * qty


def calculate_gst(cost, rate=0.05):
    return round(cost * rate, 2)


def generate_bill(subtotal, discount_percent=0):
    discount = subtotal * discount_percent
    amount_after_discount = subtotal - discount
    gst = calculate_gst(amount_after_discount)
    total = amount_after_discount + gst
    return discount, gst, total


def split_bill(total, people):
    each_pays = round(total / people, 2)
    left_over = round(total - each_pays * people, 2)
    return each_pays, left_over


# ---------------- Main program ----------------
# 3 friends order 2 dosa and 3 coffee, with a 10% coupon.

subtotal = item_cost("dosa", 2) + item_cost("coffee", 3)   # 100 + 60 = 160
discount, gst, total = generate_bill(subtotal, 0.10)       # 16, 7.2, 151.2
each, extra = split_bill(total, 3)                         # 50.4, 0.0

print("Subtotal :", subtotal)
print("Discount :", discount)
print("GST      :", gst)
print("Total    :", total)
print("Each pays:", each, "| Left over:", extra)3