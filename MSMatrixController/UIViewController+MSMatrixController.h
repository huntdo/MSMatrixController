// UIViewController+MSMatrixController.h
//
// Copyright (c) 2013 Marco Sero (http://www.marcosero.com)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.


#import <Foundation/Foundation.h>

@class MSMatrixMasterViewController;

typedef struct {
  int row;
  int col;
} Position;

@interface UIViewController (MSMatrixController)

@property (assign, nonatomic) NSInteger row;
@property (assign, nonatomic) NSInteger col;

@property (assign, readonly, nonatomic) Position position;

@property (weak, nonatomic, readonly) MSMatrixMasterViewController *matrixViewController;
@property (weak, nonatomic) UIViewController *leftViewController;
@property (weak, nonatomic) UIViewController *rightViewController;
@property (weak, nonatomic) UIViewController *topViewController;
@property (weak, nonatomic) UIViewController *bottomViewController;

@end