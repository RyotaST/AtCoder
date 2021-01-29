Sx, Sy, Gx, Gy = gets.split.map(&:to_i)

slope = ((Sy+Gy).rationalize/(Sx-Gx).rationalize).to_f
y_intercept = Sy - slope * Sx
p -y_intercept / slope