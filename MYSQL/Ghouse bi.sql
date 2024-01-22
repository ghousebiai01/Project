ai_class_projectai_students_list_for_delimitershow databases;	
    use ai_ghouse_bi;
    
create table ai_class_project(SNO int not null primary key,	Name varchar(40),	DOB date not null,	Aadhar_Number long,	Biometric_ID long,	 Contact_No long,	User_name varchar(40), 	Password varchar(40),	UG	varchar(40),Subject varchar(40),	Year_of_Passing long,	Email_id varchar(40),	Address varchar(250));

    select * from ai_class_project;
insert into ai_class_project values (1,	'Abdul Rahman  B',	'2001-01-15',	669092087983,	92087983,	9952630126,	'TI2023M-C01E438',
'Password@123',	'BSC',	'Computer science',	2022	,'abdulrahman001007@gmail.com'	,'No 3/1-76 Indra street, Keela ambikaburam Trichy-04');

insert into dhillu_class_project values(2	,'Arun T',	'2001-01-16',	341246643302	,46643302,	8525880306,	'PU2023M-C01E488',
	'Password@123',	'BSC'	,'Computer science',	2023,	'arunaathi41@gmail.com'	,'3/4 Thirupur ,Thirupur (po),Kulathur(tk),Senaiyakuti,Pudukkottai (Dt), 622502');
insert into dhillu_class_project values(3,	'Aysha sithika L','2001-01-17',784654756225,	54756225,	8124823036,'TI2023F-C01E78D',
'Password@123',	12,	'Computer science',2005,	'aslamshabeen@gmail.com',	'LIGII,2801, BISMILLAH MANZIL,Anna nagar,phase 2 Navalpattu, Trichy -26'),
    (4, 'Bhavani R',	'2001-01-18',	935775705642	,75705642,	6380185097	,'Pu2023F-C01E44D',
	'Password@123'	,'BSC',	'Computer science'	,2023,	'bb464490@gmail.com	','Melakkottai Kovilur (p), Alangudi Tk Pudukkottai (dt)'),
(5,	'Fathima M	','2001-01-19',	622631324614	,31324614	,6374041818	,'TI2023F-C01E43B','Password@123',	'B.Com'	,'Commerce'	,2024,'Ray0488faths@gmail.com','	5/249, 20th cross, vasancity, vayalur road, trichy-620102'),
(6,	'Ghouse bi S',	'2001-01-20',	818393990050,	93990050,	9994286043	,'TI2023F-C01E46D',
	'assword@123',	'B.A.',
	'English',	2010	,'happydhillu@gmail.com',	'MIG 49, Phase 1, Anna nagar,TNUDP, trichy-620026'),
   ( 7	,'Gnanagowsalya K',	'2001-01-21',	418718821662,	18821662	,7094373123	,'TI2023F-C01E474',
	'Password@123',	'Bsc '	,'Computer science',
	2023	,'kowsalyakannan29@gmail.com'	,'26/1, College road,Sri Ram theatre near, Musiri,Trichy(Dt)'),
    (8	,'Hajeera Sithika L'	,'2001-01-22'	,430341868981,	41868981,	8056447098	,'TI2023F-C01E796',
	'Password@123',	'BA',	'English'	,2013	,'hajeerasithka2021@gmail.com','3, murugesan street, M.K. kottai, trichy'),
(9, 'HARIHARAN A'	,'2001-01-23',	304765424440,	65424440,	9363649175,	'PE2023M-C01E437',
'Password@123',	'BE'	,'EEE',	2023,	'hariharananbu2001@gmail.com'	,'2/225 North st keelapuliyur po Kunnam tk Perambalur dt 621115'),
(10,	'Jayalakshmi R'	,'2001-01-24',	432445616668,45616668,	9500628375,	'TI2023F-C01E444',
	'Password@123'	,'BCA',	'Computer application',
	2019	,'jasperjeevi@gmail.com'	,'28-A, bharathiyar Street, west ambigapuram, trichy-4'),
			
(11,	'Jothika J	','2001-01-25',	693941180387,	41180387	,9585607631,	'TI2023F-C01E555',
	'Password@123',	'BSC',	'Mathematics',	2023,	'jothikajagan8@gmail.com'	,'H/5, Housing Unit, Parvathipuram, Musiri, Trichy DT.'),
			
(12,	'Kalaiarasan A',	'2001-01-26',	447595386464	,95386464	,9600330846	,'TI2023M-C01E78B',
	'Password@123',	'B.com',
	'Commerce',	2009,	'Kalai29.7@gmail.com',	'2/337 navalpattu burma colony oft po trichy 16'),
			
(13,	'Kayalvizhi' ,'2001-01-27'	,	'null','null',	7339221973	,'TI2023F-C01E475',	'Password@123'	,'BE'	,'Mechanical engineering',
	2020,	'kayalmahe123@gmail.com	','Door No: 2/125A, Koothur colony, Koothur post, mannachanallur Tk, Trichy - 621216'),
(14	,'Komaladevi. S',	'2001-01-28'	,460205744637,	05744637	,8940898862	,'PU2023F-C01E466',
	'Password@123'	,'BSC','	Computer science',	2023	,'komaladevi2003@gmail.com	','Gandharvakkottai pudukottai'),
			
(15	,'LAVANYA M' ,	'2001-01-29',	629731226643,	31226643	,7904460924,'TI2023F-C01EA43',
	'Password@123',	'BSC' ,	'Mathematics',	2021,	'mlavanyam37@gmail.com','33/66 Kamala Nehru Nagar, EB Road,Trichy-8'),
			
(16,	'Narayanan S',	'2001-01-30',	282903912214 ,03912214,	9361015928,	'TI2023M-C01E78C'	,'Password@123',	'BA',	'History'	,2019,	'Naveenkds82@gmail.com',	'3/141 Sivan kovil street allithurai somarampettai post trichy 620102'),
			
(17,'Prasanth P','2001-01-31',	983315540255,	15540255,	9361216766,	'PU2023M-C01E445',
	'Password@123','BE',	'ECE',	2022	,'aryanprasanth163@gmail.com',	'No 105, Maruthampatti, Vilapatti(post), Ilupur (Taluk), Pudukkottai-622504'),
			
(18	,'Priya S'	,'2001-02-01',	920343048388 ,43048388,	9626940557	,'TI2023F-C01EC0E',
'Password@123','B.SC',	'Physics',	2023,	'lakshmipriya5522@gmail.com','	10,Mettu street,Wouraiyur Trichy-3'	),		
(19,	'Punithavathi D',	'2001-02-02',	762578126673,	78126673,	6369782863	,'TI2023F-C01E8C2',
	'Password@123',	'B.Com'	,'Commerce',	2025,	'Punithavathid1997@gmail.com',	'2/275,NPS colony,OFT Main Road, HAPF Town, Suriyur Post, Trichy-62002'),		
(20,	'Raghul S',	'2001-02-03',	871736862600,	36862600,	7010107069	,'TI2023M-C01E4E6',
	'Password@123',	'BE	','MECHANICAL ENGINEERING',	'2019','	rockstarraghul55@gmail.com','3/443 mgr rajaveethi Vs colony Kattur ,Trichy 620019'),
			
(21	,'Roobankumar  K'	,'2001-02-04',	612231264958	,31264958,	7904255453,	'TI2023M-C01E8CB',	'Password@123',	'BE',	'ECE',	2015,	'vroobank92@gmail.com'	,'L1, chandradhayam, Shankar abodes, near krt motors, chennai trunk road, Thiruvanaikovil, trichy'	),		
(22	,'Sangari S',	'2001-02-05'	,360158896738,	58896738	,9787264394,	'TH2023F-C01E43E',
	'Password@123',	'BE'	,'ECE',	2019,	'sangarisaminathan@gmail.com',	'1/44, Agraharam, North budalur, Thanjavur (Dt), 613602'),
			
(23,	'Santhiya S',	'2001-02-06',842296226066,	96226066,	8940937523,	'TI2023F-C01E43D',
	'Password@123',	'Bsc' ,	'Information technology',
	2023,	'santhiyasakthivel37@gmail.com',	'No 57,3rd street gandhinagar, college road musiri, trichy(dt)'),
			
(24,'Saranya N'	,'2001-02-07',	971123726105,	23726105,	8248879007,	'TI2023F-C01EA19',
	'Password@123',	'BE',	'CSE',	2015,	'saranyanarayananai01@gmail.com'	,'No3a Balaji Avenue 1st cross, Old karur road, Melachinthamani Trichy 620002'),
			
(25,	'Saravanan M','	2001-02-08	',385868916470,	68916470,	8838011266	,'TH2023M-C01E44A',
	'Password@123',	'BSC',	'Computer Science',
	2023,	'saravanasaro1435@gmail.com',	'1/88, Vallabramankadu, Sornakadu (Post), Peravurani(Taluk), Thanjavur (District)-614804'),
			
(26	,'Snega D	','2001-02-09',	546307861816,	07861816,	9047648856	,'TI2023F-C01E446',
	'Password@123',	'BSC'	,'IT',	2023,	'Stdsnega.it@cauverycollege.ac.in'	,'1-130 / A perumal Kovil street, Reddi mangudi, Trichy'),			
(27,'Srinidhi S'	,'2001-02-10',	733557069525,	57069525	,9360728585,	'TI2023F-C01EA34',
	'Password@123','BSC',	'IT	',2023,	'Srinidhisrinidhi233@gmail.com',	'45/B East street, melur, srirangam'),
			
(28	,'Tamil V',	'2001-02-11'	,277289901567	,89901567	,7904761471	,'TI2023F-C01EA44',
	'Password@123','BSC','IT',	2023,'venktesantamil@gmail.com',	'45/B East street, Melur, Srirangam, Trichy	'),		
(29	,'Vinu Andrews S'	,'2001-02-12'	,543353698598,	53698598	,8428908488,	'TI2023M-C01F2A8',	'Password@123',	'Bba',	'business administration',	2022,	'vinuandrews10@gmail.com',	'66, muslim street varaganeri Trichy	'),		
(30,	'Yogarajan K'	,'2001-02-13',	241602457541,	02457541,	6379275571,	'TH2023M-C01E455',
	'Password@123',	'BCA', 'Computer Application',2022,	'yogiraja2001@gmail.com'	,'44,agraharam,north Budalur, Budalur, Thanjavur (dt).Pincode:613602');

select* from dhillu_class_project;
call zz();
			
          


create table ai_system_info (SNO int not null primary key,	Name varchar(40),	System_no int,	Errors varchar(60),	OS_Name varchar(60),	RAM varchar(60),	HARD_DISK_SIZE varchar(60),	Mouse_Condition varchar(60),	Keyboard_Condition varchar(60),foreign key (System_no) references ai_class_project (sno));
insert into ai_system_info values(13,	'Kayalvizhi M'	,1,	'visual C++2019',	'Windows 7 Ultimate',	'4.00 GB'	,	'INTEL CORE i3',	'Working',	'working'	),
(22,	'Sangari S',	2,	'Working',	'windows 8.1 pro',	'2.00 GB',	'INTEL Pentium',	'working'	,'Working'),
(10	,'Jayalakshmi R',	3	,'working',	'windows 8.1 pro',	'4.00 GB'	,	'INTEL CORE i3',	'working',	'working')	,
(5	,'Fathima M	',4,	'visual C++ 2019'	,'windows 7 ultimate' ,	'2.00GB',		'Intel Core  i3',	'working'	,'working')	,
(15	,'LAVANYA M '	,5	,'visual C++ 2019',	'Windows 7 Ultimate',	'4.00 GB'	,	'Intel Core i3',	'Working',	'Working'	),
(24,	'Saranya N',	6	,'not supported by this processor type',	'Windows 7 Professional',	'2.00 GB'	,	'INTEL CORE i3',	'Working',	'Working'),
(4	,'Bhavani R'	,8	,'working'	,'windows 10 pro','4.00 GB'	,	'Intel Core i3'	,'working'	,'working'	),
(19	,'Punithavathi D'	,9,'visual C++ 2019',	'windows 8.1 pro'	,'2.00 GB',		'Intel Core 2 Duo', 'working','working'	),
(26	,'Snega D',	10	,'working',	'windows 10 pro	','4.00 GB'	,	'intel core i3',	'working',	'working'	),
(28	,'Tamil V',	11	,'visual C++2019','windows 8.1	','4.00 GB'	,	'INTEL CORE i3',	'working'	,'working'	),
(27	,'Srinidhi S',	12	,'visual C++2019',	'windows 8.1',	'2.00 GB',		'INTEL CORE i3'	,'working',	'working'	),
(23	,'Santhiya S'	,13,	'not supported by this processor type',	'windows 10 pro','	4.00 GB'	,	'Intel Core 2 Duo',	'working',	'Working'	),
(7	,'Gnanagowsalya K'	,14,	'working'	,'windows 10 ProN',	'8.00 GB'	,	'INTEL CORE i5',	'working'	,'working'	),
(11,	'Jothika J'	,15,	'working',	'Windows 8.1 Pro',	'4.00 GB'	,	'INTEL CORE i3',	'working'	,'working'	),
(8,	'Hajeera Sithika L',	16	,'working'	,'windows 8.1',	'2GB'	,	'Intel Core 2 Duo',	'working'	,'working'	),
(6,	'Ghouse bi S	',18	,'working	','Windows 8.1 Pro',	'4GB'	,	'INTEL CORE i3	',' working',	'working'	),
(29,	'Vinu Andrews S',	33,	'working',	'windows 8.1',	'2gb'	,'Intel Core 2 Duo',	' working'	,'working'	),
(21,	'Roobankumar  K',	34,	'processor not supported	','windows 7 ultimate',	'2.00GB	'	,'intel core 2 duo',	'working'	,'working'	),
(3	,'Aysha sithika L',	17	,'WORKING','windows 10 pro	','2GB','	INTEL CORE i3	','working',	'working	'),
(18,	'Priya S'	,23	,'not  support by this processer type','windows 7 proffessional',	'4.00GB',	'INTEL CORE i3',	'working',	'working'	),
(14,	'Komaladevi. S'	,7	,'visualc++2019',	'Windows 8.1 Pro',	'4.00  GB'	,	'Intel Pentium'	,'Working',	'Working'	),
(12,	'Kalaiarasan A'	,32	,'working',	'Windows 8.1 Pro',	'4.00 GB'	,	'INTEL CORE i3	','working',	'working	'),
(1	,'Abdul Rahman  B	',42,	'working',	'windows 8.1 pro'	,'2 Gb',		'Intel Pentium',	'working',	'working'	),
(2	,'Arun T'	,43	, 'working'	,'windows 8.1',	'2.00GB	'	,'Intel Core 2 Duo',	'working',	'working'	),
(17	,'Prasanth P',	35	,'C++2019', 'Windows 10 Pro	','2.00 GB	',	'Intel Pentium',	'Working',	'working'	),
(30,	'Yogarajan K	',36,	'Not supported by the processor', '	windows 10 pro',	'2 GB RAM '	,	'Intel Pentium',	'working',	'working'	),
(25	, 'Saravanan M',	37	,'Working'	,'Windows 8.1 Pro'	,'4.00 GB',		'INTEL CORE i3',	'Working',	'Working'	),
(9,	'HARIHARAN A'	,38,	'working',	'windows 8.1 pro',	'4.00 GB'	,	'INTEL CORE i3',	'working',	'working'	),
(20,	'Raghul S'	,39,	'not supported by the processor',	'windows 7',	'2.00 GB',	'Intel Pentium',	'Working',	'working'	),
(16,	'Narayanan S',	19,	'Working',	'windows 8.1',	'4.00GB',		'INTEL CORE i3',	'working',	'working	');
					  
	select * from ai_system_info2;
    
	create table ai_system_info2 (SNO int not null primary key,	Name varchar(40),	System_no int,	Errors varchar(60),	OS_Name varchar(60),	RAM varchar(60),	HARD_DISK_SIZE varchar(60),	Mouse_Condition varchar(60),	Keyboard_Condition varchar(60),foreign key (SNO) references ai_class_project (SNO));	
    insert into ai_system_info2 values(13,	'Kayalvizhi M'	,1,	'visual C++2019',	'Windows 7 Ultimate',	'4.00 GB'	,	'INTEL CORE i3',	'Working',	'working'	),
(22,	'Sangari S',	2,	'Working',	'windows 8.1 pro',	'2.00 GB',	'INTEL Pentium',	'working'	,'Working'),
(10	,'Jayalakshmi R',	3	,'working',	'windows 8.1 pro',	'4.00 GB'	,	'INTEL CORE i3',	'working',	'working')	,
(5	,'Fathima M	',4,	'visual C++ 2019'	,'windows 7 ultimate' ,	'2.00GB',		'Intel Core  i3',	'working'	,'working')	,
(15	,'LAVANYA M '	,5	,'visual C++ 2019',	'Windows 7 Ultimate',	'4.00 GB'	,	'Intel Core i3',	'Working',	'Working'	),
(24,	'Saranya N',	6	,'not supported by this processor type',	'Windows 7 Professional',	'2.00 GB'	,	'INTEL CORE i3',	'Working',	'Working'),
(4	,'Bhavani R'	,8	,'working'	,'windows 10 pro','4.00 GB'	,	'Intel Core i3'	,'working'	,'working'	),
(19	,'Punithavathi D'	,9,'visual C++ 2019',	'windows 8.1 pro'	,'2.00 GB',		'Intel Core 2 Duo', 'working','working'	),
(26	,'Snega D',	10	,'working',	'windows 10 pro	','4.00 GB'	,	'intel core i3',	'working',	'working'	),
(28	,'Tamil V',	11	,'visual C++2019','windows 8.1	','4.00 GB'	,	'INTEL CORE i3',	'working'	,'working'	),
(27	,'Srinidhi S',	12	,'visual C++2019',	'windows 8.1',	'2.00 GB',		'INTEL CORE i3'	,'working',	'working'	),
(23	,'Santhiya S'	,13,	'not supported by this processor type',	'windows 10 pro','	4.00 GB'	,	'Intel Core 2 Duo',	'working',	'Working'	),
(7	,'Gnanagowsalya K'	,14,	'working'	,'windows 10 ProN',	'8.00 GB'	,	'INTEL CORE i5',	'working'	,'working'	),
(11,	'Jothika J'	,15,	'working',	'Windows 8.1 Pro',	'4.00 GB'	,	'INTEL CORE i3',	'working'	,'working'	),
(8,	'Hajeera Sithika L',	16	,'working'	,'windows 8.1',	'2GB'	,	'Intel Core 2 Duo',	'working'	,'working'	),
(6,	'Ghouse bi S	',18	,'working	','Windows 8.1 Pro',	'4GB'	,	'INTEL CORE i3	',' working',	'working'	),
(29,	'Vinu Andrews S',	33,	'working',	'windows 8.1',	'2gb'	,'Intel Core 2 Duo',	' working'	,'working'	),
(21,	'Roobankumar  K',	34,	'processor not supported	','windows 7 ultimate',	'2.00GB	'	,'intel core 2 duo',	'working'	,'working'	),
(3	,'Aysha sithika L',	17	,'WORKING','windows 10 pro	','2GB','	INTEL CORE i3	','working',	'working	'),
(18,	'Priya S'	,23	,'not  support by this processer type','windows 7 proffessional',	'4.00GB',	'INTEL CORE i3',	'working',	'working'	),
(14,	'Komaladevi. S'	,7	,'visualc++2019',	'Windows 8.1 Pro',	'4.00  GB'	,	'Intel Pentium'	,'Working',	'Working'	),
(12,	'Kalaiarasan A'	,32	,'working',	'Windows 8.1 Pro',	'4.00 GB'	,	'INTEL CORE i3	','working',	'working	'),
(1	,'Abdul Rahman  B	',42,	'working',	'windows 8.1 pro'	,'2 Gb',		'Intel Pentium',	'working',	'working'	),
(2	,'Arun T'	,43	, 'working'	,'windows 8.1',	'2.00GB	'	,'Intel Core 2 Duo',	'working',	'working'	),
(17	,'Prasanth P',	35	,'C++2019', 'Windows 10 Pro	','2.00 GB	',	'Intel Pentium',	'Working',	'working'	),
(30,	'Yogarajan K	',36,	'Not supported by the processor', '	windows 10 pro',	'2 GB RAM '	,	'Intel Pentium',	'working',	'working'	),
(25	, 'Saravanan M',	37	,'Working'	,'Windows 8.1 Pro'	,'4.00 GB',		'INTEL CORE i3',	'Working',	'Working'	),
(9,	'HARIHARAN A'	,38,	'working',	'windows 8.1 pro',	'4.00 GB'	,	'INTEL CORE i3',	'working',	'working'	),
(20,	'Raghul S'	,39,	'not supported by the processor',	'windows 7',	'2.00 GB',	'Intel Pentium',	'Working',	'working'	),
(16,	'Narayanan S',	19,	'Working',	'windows 8.1',	'4.00GB',		'INTEL CORE i3',	'working',	'working	');
										
	select * from ai_class_project a1, 	ai_system_info2 a2;	
	select * from ai_class_project a1
    select * from ai_class_project a1 left 	join ai_system_info2 on	a1.SNO=a1.SNO;	
    
    
   
select * from ai_batch01 a1 left join system_info s1 on a1.sno =s1.details_id;
select first_name from ai_batch01 a1 right join system_info s1 on a1.sno =s1.details_id;
select name,details_id,system_no from ai_batch01 a1 inner join system_info s1 on a1.sno =s1.details_id;
use ai_ghouse_bi;
create table ai_students_list_for_delimiter(SNO int not null primary key auto_increment, names varchar(40),gender varchar(10), age int,location varchar(40),work varchar(40));
	
select* from ai_students_list_for_delimiter;
delimiter b1
create procedure xx()
begin
select * from ai_students_list_for_delimiter;
end b1
delimiter ;
call xx();	
use ai_ghouse_bi;
	
delimiter b1
create procedure insertv(
in namesp varchar(40),
in genderp varchar(10), 
in agep int,
in locationp varchar(40),
in workp varchar(40))
begin
insert into  ai_students_list_for_delimiter(names,gender, age,location,work)
values(namesp ,genderp,agep,locationp,workp);
end b1
delimiter;
					call insertv('Ghouse Bi. s','Female',33,'Trichy','Home maker');				
						update 	ai_students_list_for_delimiter set SNO=4 where SNO=5;			
				call xx();	
                
	call insertv('Hajeera','Female',29,'Bangalore','Software Engineer');	
    delimiter b1
create procedure insertv(
in namesp varchar(40),
in genderp varchar(10), 
in agep int,
in locationp varchar(40),
in workp varchar(40))
begin
insert into  ai_students_list_for_delimiter(names,gender, age,location,work)
values(namesp ,genderp,agep,locationp,workp);
end b1
delimiter;
use ai_ghouse_bi;	
		
delimiter b1
drop procedure if exists deletev;b1
create procedure deletev(
in tablename varchar(200),          
in idname varchar(40),
in idp int
)
begin
set @statement=concat('delete from ',tablename, ' where ',idname,'=',idp);
prepare stmt from @statement;
execute stmt;
end b1
delimiter ;singleupdatev
call deletev('ai_students_list_for_delimiter','SNO',6);

call singleup('ai_students_list_for_delimiter','work','Student', 'SNO',4);
										
										
	
use ai_ghouse_bi;
									
	delimiter b1
    drop procedure if exists alterv;b1
    create procedure alterv (
    in tablename varchar(200),
    in columnname varchar(40))
    begin
    set@statement=concat('alter table ',tablename,' drop column ',columnname);
    prepare stmt from @statement;
    execute stmt;
    end b1
    delimiter ;
  
										
call alterv('ai_students_list_for_delimiter','mobile_no');						
describe ai_students_list_for_delimiter;
 										
										
									
	delimiter b1
    drop procedure if exists updatev2;b1
    create procedure updatev2 (
    in snovalue int,
    in columnvalue varchar(40),
    in columnvalue2 varchar(40))
    									
	begin
    update ai_students_list_for_delimiter set location= columnvalue ,work= columnvalue2 where SNO=snovalue;
	end b1
    delimiter ;
										
		call updatev2(2, 'Anna_Nagar','Software Engineer');					ai_class_system_info
										
	call xx();									
	select * from ai_bright_ai_students_details;							
										
				SELECT Orders.OrderID, Customers.CustomerName
FROM Orders
INNER JOIN Customers ON Orders.CustomerID = Customers.CustomerID;						
										
										
										
select * from ai_system_info2;											
					 select * from bright_ai_students_details;	select * from 	ai_class_project;					
select 										
										
								
										
										
										
										
										
										
										
	 use ai_ghouse_bi;		
     create table dhillu_demo(no int, names varchar(50), age int, mobile_no long) ;
		select * from	dhillu_demo;	
      alter table dhillu_demo add column credits int; 
         create table dhillu_demo1(  gender varchar(50),  aadhar_no long,credits int) ;
		select * from	dhillu_demo1;	
       
       SELECT * from dhillu_demo  JOIN dhillu_demo1;
select 
        
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										







	