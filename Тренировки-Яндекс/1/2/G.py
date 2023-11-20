a = list(map(int, input().split()))

maxim, pred_maxim, min_maxim, min_pred_maxim = 0, 0, 0, 0

for i in range(len(a)):
    x = a[i]
    if x > maxim:
        pred_maxim = maxim
        maxim = x
    elif x > pred_maxim:
        pred_maxim = x
    elif x < min_maxim:
        min_pred_maxim = min_maxim
        min_maxim = x
    elif x < min_pred_maxim:
        min_pred_maxim = x

if (maxim * pred_maxim) > (min_maxim * min_pred_maxim):
    print(pred_maxim, maxim)
elif min_maxim * min_pred_maxim != 0:
    print(min_maxim, min_pred_maxim)
else:
    print(min(a[0], a[1]), max(a[0], a[1]))
