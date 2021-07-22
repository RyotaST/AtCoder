H, W = gets.split.map(&:to_i)
puts (H==1 || W==1)  ? [H,W].max : ((H+1)/2)*((W+1)/2)