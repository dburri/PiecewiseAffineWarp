//
//  PiecewiseAffineWarp.h
//  PiecewiseAffineWarp
//
//  Created by DINA BURRI on 7/3/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>

@interface PiecewiseAffineWarp : NSObject {
    EAGLContext *context;
    
    GLuint framebuffer;
    GLuint colorRenderbuffer;
    
    NSString *fileVShader;
    NSString *fileFShader;
    
    GLuint program;
    GLuint texture;
    GLuint shaderLocation[4];
    
    CGSize imgSize;
    UIImage *originalImage;
    UIImage *warpedImage;
}

@property UIImage *originalImage;
@property UIImage *warpedImage;

typedef unsigned char uchar;

enum {
    VERTEX = 0,
    COLOR,
    TEXTURECOORD,
    TEXTURE
};

- (void)setImage:(UIImage *)image;

- (void)initOES;
- (void)setupVBO;

- (void)render;
- (UIImage *)readFramebuffer;

- (void)initShaders;
- (NSString *)loadShaderSource:(NSString *)file;
- (GLuint)compileShader:(NSString *)file :(GLenum)type;

- (void)checkOpenGLError:(NSString *)msg;
- (uint)findNextPowerOfTwo:(uint)val;

@end
