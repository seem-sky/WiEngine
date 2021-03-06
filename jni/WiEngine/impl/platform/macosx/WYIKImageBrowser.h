/*
 * Copyright (c) 2010 WiYun Inc.
 * Author: luma(stubma@gmail.com)
 *
 * For all entities this program is free software; you can redistribute
 * it and/or modify it under the terms of the 'WiEngine' license with
 * the additional provision that 'WiEngine' must be credited in a manner
 * that can be be observed by end users, for example, in the credits or during
 * start up. (please find WiEngine logo in sdk's logo folder)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#if MACOSX

#import <Foundation/Foundation.h>
#import <Quartz/Quartz.h>

@interface WYIKImageBrowser : NSObject {
@private
	/// 回调接口
	wyImagePickerCallback m_callback;
	
	/// 额外用户数据
	void* m_data;
	
	/// 期望的宽度
	int m_width;
	
	/// 期望的高度
	int m_height;
	
	/// 是否在缩放时保持宽高比例
	BOOL m_keepRatio;
	
	/// sheet window
	NSWindow* m_sheetWindow;
	
	/// the array that contains the items to show in the image browser
    NSMutableArray* m_images;
	
	/// image browser
	IKImageBrowserView* m_imageBrowser;
	
	/// is on top level?
	BOOL m_topLevel;
	
	/// current path
	NSString* m_curPath;
}

- (id)initWithCallback:(wyImagePickerCallback*)callback data:(void*)data width:(int)width height:(int)height keepRatio:(BOOL)keepRatio;
- (void)beginSheet;

@end

#endif // #if MACOSX
