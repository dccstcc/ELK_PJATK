import { NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';
import { FormsModule } from '@angular/forms';

import { AppComponent } from './app.component';
import { HelloComponent } from './hello.component';
import { BlogPostComponent } from './blog-post/blog-post.component';
import { PostCommentComponent } from  './post-comment/post-comment.component';


@NgModule({
  imports:      [ BrowserModule, FormsModule ],
  declarations: [ AppComponent, HelloComponent, BlogPostComponent, PostCommentComponent],
  bootstrap:    [ AppComponent ]
})
export class AppModule { }
