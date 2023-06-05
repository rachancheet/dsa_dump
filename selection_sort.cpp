#include <iostream>
#include <vector>
using namespace std;

int bubble_sort(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count++;
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            // cout << arr[i] << "  with " << arr[i + 1] << endl;
            if (i >= 1 && (arr[i - 1] > arr[i]))
            {
                // cout<<i<<endl;
                i = 0;
            }
        }
    };
    cout << count << endl;
    return 0;
}

int babbar_sort(int arr[], int n)
{
    int count = 0;
    for (int k = 0; k < n; k++)
    {
        bool _swap = false;

        for (int i = 0; i < n - i; i++)
        {
            count++;
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                // cout << arr[i] << "  with " << arr[i + 1] << endl;
                _swap = true;
            }
        }
        if (!_swap)
            break;
    }
    cout << count << endl;
    return 0;
}

int count_sort(int arr[], int n)
{
    int k = 0;
    int *count = (int *)calloc(1000, sizeof(int));
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        *(count + arr[i]) += 1;
    }
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < *(count + i); j++)
        {
            // cout<<i<<endl;
            // k++;
        }
    }
    // cout<<"k: "<<k<<endl;

    return 0;
}
int selection_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

int insertion_sort(int arr[], int n)
{

    for (int i = 0; i < n-1; i++)
    {
        if (arr[i+1]<arr[i])
        { 
            int index = 0;
            for (int j = i; j >= 0; j--)
            {   
                // cout<<"arr[i+1] = "<<arr[i+1]<<" ::  "<<arr[j]<<endl;
                if (arr[j] <= arr[i + 1])
                {
                    // cout<<"loda"<<endl; 
                    index = j+1;
                    break;
                }
            }
            int temp2, temp1 = arr[i + 1];
                    for (int jk = index; jk <= i + 1; jk++)
                    {
                        temp2 = arr[jk];
                        // cout<<" "<<temp1<<" :: "<<temp2<<endl;
                        arr[jk] = temp1;
                        temp1 = temp2;
                        // cout<<"i:"<<i<<endl<<"j:"<<j<<endl<<endl<<"jk:"<<jk<<endl;
                        // cout<<"arr[jk]"<<arr[jk]<<endl
                        // cout<<"--------\n"<<endl;
                    }
        }
    }
    return 0;
}
int babbar_insertion(int arr[],int n){
    for(int i=1;i<n;i++){

        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
            else{
                            break;
                        }
         }


    return 0;
    }
}

int main()
{

    int arr[] = {43, 275, 819, 966, 693, 771, 708, 220, 438, 257, 789, 486, 374, 3, 504, 665, 158, 735, 238, 791, 978, 335, 50, 669, 680, 390, 734, 867, 890, 617, 109, 112, 134, 237, 681, 141, 236, 287, 671, 588, 817, 788, 770, 440, 113, 16, 527, 889, 87, 733, 411, 144, 604, 545, 997, 104, 227, 210, 355, 922, 466, 187, 409, 90, 200, 464, 739, 744, 644, 531, 202, 898, 524, 450, 280, 2, 62, 985, 277, 209, 593, 863, 517, 441, 366, 476, 559, 15, 353, 689, 370, 538, 183, 467, 736, 85, 140, 161, 156, 381, 781, 757, 305, 186, 553, 291, 445, 431, 492, 68, 925, 274, 283, 887, 687, 542, 722, 899, 309, 325, 586, 256, 61, 299, 673, 814, 807, 539, 349, 159, 946, 64, 130, 664, 292, 365, 169, 129, 940, 790, 336, 38, 861, 205, 329, 920, 998, 988, 503, 780, 605, 676, 167, 581, 28, 175, 575, 726, 372, 911, 556, 217, 146, 634, 447, 974, 211, 745, 136, 859, 682, 145, 7, 399, 761, 934, 840, 909, 111, 765, 281, 249, 992, 945, 964, 285, 799, 976, 699, 767, 14, 640, 485, 923, 590, 670, 219, 254, 123, 163, 900, 25, 714, 367, 408, 806, 675, 150, 573, 530, 453, 294, 591, 753, 962, 222, 122, 688, 728, 954, 198, 518, 544, 971, 743, 515, 375, 832, 841, 798, 142, 165, 487, 96, 218, 240, 643, 848, 989, 119, 6, 74, 803, 451, 462, 795, 276, 838, 295, 747, 55, 608, 984, 91, 480, 179, 834, 471, 801, 667, 392, 266, 286, 713, 995, 668, 704, 901, 846, 34, 659, 456, 660, 346, 762, 763, 33, 855, 705, 576, 494, 715, 623, 787, 337, 116, 897, 601, 972, 313, 364, 661, 645, 598, 571, 721, 773, 754, 979, 776, 654, 173, 698, 619, 477, 360, 692, 244, 308, 293, 5, 362, 751, 797, 296, 860, 561, 930, 990, 432, 29, 357, 953, 245, 774, 716, 952, 44, 311, 520, 206, 779, 577, 567, 638, 523, 182, 706, 473, 741, 854, 127, 879, 310, 536, 101, 580, 509, 502, 630, 500, 126, 395, 991, 42, 569, 184, 470, 749, 35, 827, 60, 160, 895, 857, 110, 413, 312, 738, 149, 152, 973, 886, 939, 710, 307, 147, 759, 499, 444, 975, 352, 784, 269, 657, 614, 489, 510, 241, 633, 63, 117, 865, 264, 546, 877, 268, 802, 301, 927, 968, 709, 125, 455, 725, 969, 602, 551, 906, 143, 849, 452, 239, 815, 533, 214, 627, 242, 642, 115, 332, 574, 508, 758, 168, 914, 651, 558, 382, 189, 105, 572, 195, 727, 406, 267, 956, 850, 842, 655, 176, 265, 135, 4, 88, 137, 917, 868, 513, 10, 907, 653, 258, 792, 748, 174, 77, 449, 700, 826, 78, 853, 794, 94, 103, 882, 616, 9, 247, 37, 549, 86, 417, 810, 908, 348, 772, 458, 800, 594, 839, 521, 166, 197, 729, 203, 17, 711, 805, 342, 425, 674, 903, 912, 929, 891, 69, 506, 731, 885, 376, 894, 31, 344, 768, 875, 388, 378, 804, 322, 338, 672, 552, 297, 83, 194, 871, 221, 72, 977, 764, 19, 526, 950, 229, 330, 436, 847, 635, 410, 564, 629, 967, 418, 955, 793, 994, 57, 92, 65, 246, 603, 884, 384, 424, 97, 534, 870, 878, 872, 883, 615, 481, 446, 271, 32, 825, 493, 12, 21, 317, 658, 639, 263, 821, 876, 960, 935, 108, 380, 666, 938, 537, 942, 361, 272, 625, 612, 947, 809, 701, 250, 95, 924, 566, 856, 89, 766, 649, 628, 215, 339, 454, 369, 23, 58, 595, 647, 120, 769, 341, 162, 913, 543, 172, 39, 383, 75, 583, 421, 430, 133, 496, 434, 66, 316, 232, 1, 843, 831, 394, 965, 284, 691, 557, 386, 251, 49, 138, 403, 760, 278, 304, 491, 813, 171, 224, 76, 385, 191, 637, 358, 288, 578, 641, 457, 437, 519, 529, 79, 482, 880, 568, 20, 717, 944, 981, 404, 579, 459, 547, 905, 212, 326, 719, 683, 51, 321, 851, 99, 118, 528, 234, 948, 844, 959, 488, 980, 70, 18, 315, 443, 970, 1000, 41, 475, 46, 243, 318, 290, 347, 324, 522, 957, 208, 448, 8, 818, 379, 582, 328, 331, 915, 154, 746, 986, 694, 570, 80, 816, 829, 723, 252, 359, 24, 389, 377, 565, 67, 686, 622, 983, 752, 484, 391, 626, 231, 724, 340, 261, 131, 314, 170, 13, 48, 402, 398, 114, 852, 707, 196, 525, 225, 303, 422, 327, 862, 737, 775, 501, 702, 178, 192, 373, 516, 185, 343, 778, 478, 248, 684, 363, 650, 881, 124, 279, 155, 563, 941, 541, 93, 490, 613, 888, 720, 933, 230, 100, 928, 560, 98, 334, 253, 812, 823, 620, 302, 958, 132, 916, 371, 777, 345, 678, 756, 139, 835, 82, 71, 858, 685, 535, 207, 387, 730, 320, 820, 507, 84, 435, 783, 262, 656, 874, 584, 420, 866, 663, 505, 836, 902, 289, 609, 498, 255, 433, 428, 695, 472, 226, 926, 442, 606, 869, 350, 562, 740, 904, 750, 73, 690, 918, 151, 951, 631, 554, 56, 53, 893, 393, 949, 157, 703, 81, 356, 177, 585, 54, 396, 439, 423, 824, 36, 696, 822, 190, 426, 932, 718, 652, 407, 164, 27, 646, 282, 412, 618, 982, 223, 460, 270, 259, 830, 397, 323, 405, 833, 892, 193, 11, 845, 919, 368, 351, 597, 52, 235, 148, 30, 993, 180, 153, 204, 589, 937, 677, 45, 201, 632, 963, 128, 199, 936, 662, 697, 755, 811, 188, 624, 40, 943, 479, 414, 216, 600, 427, 742, 306, 712, 106, 333, 107, 102, 121, 514, 636, 319, 987, 786, 796, 463, 592, 837, 416, 931, 596, 419, 400, 495, 873, 354, 550, 607, 461, 474, 599, 22, 181, 548, 910, 808, 785, 782, 273, 483, 497, 587, 621, 429, 610, 300, 26, 540, 47, 611, 864, 732, 59, 648, 511, 468, 213, 996, 532, 469, 512, 921, 228, 828, 401, 679, 555, 465, 233, 298, 415, 961, 260, 896};
    // int arr[] = {1,
    //              23,
    //              1,
    //              421,
    //              12,
    //              4,
    //              3};
    // int arr[]={5,2,4,23,5};

    int n = sizeof(arr) / 4;

    // selection_sort(arr, n);
    // insertion_sort(arr, n);
    babbar_insertion(arr, n);
    // bubble_sort(arr, n);
    // babbar_sort(arr, n);
    // count_sort(arr, n);

    for (int i = 0; i < sizeof(arr) / 4; i++)
        cout << arr[i] << endl;

    return 0;
}

// findings bubble sort performs about 111690674 comparisons while babbar sort performs about 500000,238000 comparisons
// babbar sort wins;