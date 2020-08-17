clc;
close all;
f=imread('C:\Users\home\Desktop\aka.jpg');
 l = rgb2gray(f);
a=im2double(l);
lap = [1 1 1; 1 -8 1; 1 1 1]; 
resp = imfilter(a, lap, 'conv'); 
minR = min(resp(:));
maxR = max(resp(:));
resp = (resp - minR) / (maxR - minR);
lap1 = [0 -1 0; -1 4 -1; 0 -1 0]; 
resp1 = imfilter(a, lap1, 'conv'); 
minR1 = min(resp1(:));
maxR1 = max(resp1(:)); 
resp1 = (resp1 - minR1) / (maxR1 - minR1);
subplot(2,2,1);
imshow(l);
title("original image");
subplot(2,2,2);
imshow(resp);
title("laplacian image 1");
subplot(2,2,3);
imshow(resp1);
title("laplacian image 2");
[r,c]=size(f);
I=log(1+a);
M=2*size(I,1)+1;
N=2*size(I,2)+1;
sigma=1;
[X, Y]=meshgrid(1:N,1:M);
centerX=ceil(N/2);
centerY=ceil(M/2);
gn=(X-centerX).^2+(Y-centerY).^2;
H=exp(-gn./(2*sigma.^2));
H=1-H;
q=fft2(I,M,N);
Iout=real(ifft2(H.*q));
Iout=Iout(1:size(I,1),1:size(I,2));
Ihmf=exp(Iout)-1;
subplot(2,2,4);
imshow(Ihmf);
title("homomorphic image");
%imshow(H,'InitialMagnification',200)
