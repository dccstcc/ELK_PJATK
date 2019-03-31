export class PostComment{
 constructor(
 public title:string,
 public date: Date,
 public content:string,
 public comments:Array<string>=[]){}
}
