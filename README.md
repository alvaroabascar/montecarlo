enzmc
====

**enzmc** is a simple tool which aims to ease and improve the design of enzyme
assays.

Enzyme Assays
-------------
The (initial) reaction rate of enzymatic reactions can be described by a variety
of mathematical models. Each of them relates the initial reaction rate (v0, the
dependent variable) to a mathematical expression which combines one or more
independent variables and one or more parameters. For example, the
Michaelis-Menten model relates the initial reaction rate (v0) to the substrate
concentration (S) and to two parameters (Km and vmax):

            v0 = vmax*S / (Km + S)   (Michaelis-Menten model)

The parameters of a given model are of interest in order to make predictions,
but also to compare different enzymes, substrates, inhibitors, etc.

To obtain the values of the parameters of a given system one must measure the
reaction rate (v0) at different points, understanding "point" as a set of
values of the independent variables. Once this data have been obtained one must
use nonlinear regression to obtain the values of the parameters which best fit
the experimental data.

The quality of the results is highly dependent on the choice of the points (the
design of the experiment), and thus it is interesting to have a way to choose
the best between different designs.

The method
----------

If we knew the real value of the parameters, we could test the quality of a
given design by means of repeating the experiment thousands of times. Each time
we would perform a nonlinear regression analysis, obtaining a value of the
parameters. Finally we could obtain the mean of each parameter, and standard
deviation of each parameter with respect to the real value.
The results would be more accurate the closer the mean of each parameter is to
the real value, and more precise the lower the standard deviation is.

Using this method we would be able to compare different designs. However, two
main problems arise, one economic, the other philosophical. In the first place,
repeating an experiment hundreds or thousands of times would be quite expensive
in terms of time and money. In the second place, the real values of the
parameters are hidden to us.

The two problems above-cited are impossible to solve, but with the aid of a
computer they can be circumvented. The economic one will be there as long as we
perform the experiment on the real world, but would vanish if we opt for
simulating the experiment instead of actually conducting it. The problem about
not knowing the real values would not be there if we could somehow choose them.

Putting it all together, we can devise the following method to test the quality
of a given design:

1- We choose the "real" values of the parameters.  
2- We calculate the v0 at the chosen points.  
3- We add a random error to each v0, obtaining a pseudo-experimental data set.  
4- We perform nonlinear regression on that data set, obtaining the values of the
   parameters.  
5- We repeat steps 3,4 several thousand times.  
6- For each parameter, we obtain its mean and its standard deviation with
respect to the real value.  

By repeating this method with differnt designs we would be able to easily
compare their quality. The closer the simulations are to reality, the more
reasonable it is to apply our conclusions to the laboratory. For this method to
be useful, the random error must be as close as possible to the real random
error. This usually means that it must be normally distributed, and depending on
the experiment it might depend on the value of the measure. The "real" values
that we choose must also be as close as possible to the real (truly real)
values. As there is no way to know them, we must conform to choose the values
obtained by some prior experiment.
